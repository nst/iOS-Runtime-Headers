Here are iOS Objective-C headers as derived from runtime introspection.

The headers were produced using [RuntimeBrowser for iPhone](https://github.com/nst/RuntimeBrowser/).

You can use the headers this way:

    NSBundle *b = [NSBundle bundleWithPath:@"/System/Library/PrivateFrameworks/GAIA.framework"];
    BOOL success = [b load];
    
    Class SKTelephonyController = NSClassFromString(@"SKTelephonyController");
    id tc = [SKTelephonyController sharedInstance];
    
    NSLog(@"-- myPhoneNumber: %@", [tc myPhoneNumber]);
    NSLog(@"-- imei: %@", [tc imei]);
    
Many other unique identifiers can be retrieved:

    Class AADeviceInfo = NSClassFromString(@"AADeviceInfo");
    NSLog(@"-- serialNumber: %@", [AADeviceInfo serialNumber]);
    NSLog(@"-- udid: %@", [AADeviceInfo udid]);
    NSLog(@"-- appleIDClientIdentifier: %@", [AADeviceInfo appleIDClientIdentifier]);

    id deviceInfo = [[[AADeviceInfo alloc] init] autorelease];
    NSLog(@"-- wifiMacAddress: %@", [deviceInfo wifiMacAddress]);

You can search the headers with [github search](https://github.com/search):

[https://github.com/search?type=Code&q=repo:nst/iOS-Runtime-Headers+radar](https://github.com/search?type=Code&q=repo:nst/iOS-Runtime-Headers+radar)
