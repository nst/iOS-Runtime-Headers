## Dynamically Generated iOS Headers

Here are iOS Objective-C headers as derived from runtime introspection.

The headers were generated using [RuntimeBrowser for iPhone](https://github.com/nst/RuntimeBrowser/).

#### Search

You can search the headers with [github search](https://github.com/search):

[https://github.com/search?type=Code&q=repo:nst/iOS-Runtime-Headers+hack](https://github.com/search?type=Code&q=repo:nst/iOS-Runtime-Headers+hack)

#### Diffs

You can compare versions based on their tags, see the [tags page](https://github.com/nst/iOS-Runtime-Headers/tags):

    $ git difftool 6.0 6.1 .

#### Sample usage

You can use the headers this way:

    NSBundle *b = [NSBundle bundleWithPath:@"/System/Library/PrivateFrameworks/GAIA.framework"];
    BOOL success = [b load];
    
    Class SKTelephonyController = NSClassFromString(@"SKTelephonyController");
    id tc = [SKTelephonyController sharedInstance];
    
    NSLog(@"-- myPhoneNumber: %@", [tc myPhoneNumber]);
    NSLog(@"-- imei: %@", [tc imei]);
    
Note that many other unique identifiers can be retrieved:

    Class AADeviceInfo = NSClassFromString(@"AADeviceInfo");
    NSLog(@"-- serialNumber: %@", [AADeviceInfo serialNumber]);
    NSLog(@"-- udid: %@", [AADeviceInfo udid]);
    NSLog(@"-- appleIDClientIdentifier: %@", [AADeviceInfo appleIDClientIdentifier]);

    id deviceInfo = [[[AADeviceInfo alloc] init] autorelease];
    NSLog(@"-- wifiMacAddress: %@", [deviceInfo wifiMacAddress]);

    Class OSDBattery = NSClassFromString(@"OSDBattery");
    NSLog(@"-- battery serial number: %@", [OSDBattery _getBatterySerialNumber]);

#### Timeline

- Green == public
- Red == private
- Blue == dylib

The code to draw this picture is in [https://github.com/nst/RuntimeBrowser/tree/master/tools/ios_headers_history](https://github.com/nst/RuntimeBrowser/tree/master/tools/ios_headers_history).

![iOS Frameworks](ios_frameworks.png)

Nicolas Seriot