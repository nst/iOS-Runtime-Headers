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

    NSBundle *b = [NSBundle bundleWithPath:@"/System/Library/PrivateFrameworks/FTServices.framework"];
    BOOL success = [b load];
    
    Class FTDeviceSupport = NSClassFromString(@"FTDeviceSupport");
    id si = [FTDeviceSupport valueForKey:@"sharedInstance"];
    
    NSLog(@"-- %@", [si valueForKey:@"deviceColor"]);
    
#### Timeline

- Green == public
- Red == private
- Blue == dylib

The code to draw this picture is in [https://github.com/nst/RuntimeBrowser/tree/master/tools/ios_headers_history](https://github.com/nst/RuntimeBrowser/tree/master/tools/ios_headers_history).

![iOS Frameworks](ios_frameworks.png)

Nicolas Seriot
