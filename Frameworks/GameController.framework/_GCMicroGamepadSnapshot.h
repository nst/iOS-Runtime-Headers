/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCMicroGamepadSnapshot : _GCMicroGamepad <_GCSnapshot> {
    GCMotion * _motion;
    NSData * _snapshotData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *snapshotData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithController:(id)arg1 snapshotData:(id)arg2;
- (id)initWithSnapshotData:(id)arg1;
- (id)motion;
- (void)setSnapshotData:(id)arg1;
- (void)set_motion:(id)arg1;
- (id)snapshotData;

@end
