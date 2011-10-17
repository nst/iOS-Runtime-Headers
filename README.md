Here are iOS Objective-C headers as derived from runtime introspection.

The headers were produced using [RuntimeBrowser for iPhone](https://github.com/nst/RuntimeBrowser/).

You can use the headers this way:

    NSBundle *b = [NSBundle bundleWithPath:@"/System/Library/PrivateFrameworks/Message.framework"];
    BOOL success = [b load];

    Class NetworkController = NSClassFromString(@"NetworkController");
    id nc = [NetworkController sharedInstance];

    NSLog(@"-- IMEI: %@", [nc IMEI]);
