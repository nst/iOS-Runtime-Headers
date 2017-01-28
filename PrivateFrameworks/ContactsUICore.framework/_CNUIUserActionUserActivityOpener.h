/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface _CNUIUserActionUserActivityOpener : NSObject <CNUIUserActionUserActivityOpener> {
    LSApplicationWorkspace * _applicationWorkspace;
}

@property (nonatomic, readonly) LSApplicationWorkspace *applicationWorkspace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)errorForUnableToOpenUserActivity:(id)arg1 withUnderlyingError:(id)arg2;

- (void).cxx_destruct;
- (id)applicationWorkspace;
- (id)init;
- (id)initWithApplicationWorkspace:(id)arg1;
- (id)openUserActivity:(id)arg1 usingBundleIdentifier:(id)arg2 withScheduler:(id)arg3;

@end
