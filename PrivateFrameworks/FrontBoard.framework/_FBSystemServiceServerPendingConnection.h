/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface _FBSystemServiceServerPendingConnection : NSObject {
    id  _completion;
    FBSystemServiceFacility * _facility;
}

@property (nonatomic, copy) id completion;
@property (nonatomic, retain) FBSystemServiceFacility *facility;

+ (id)pendingConnectionToFacility:(id)arg1 completion:(id)arg2;

- (id)completion;
- (void)dealloc;
- (id)facility;
- (id)initWithFacility:(id)arg1 completion:(id)arg2;
- (void)setCompletion:(id)arg1;
- (void)setFacility:(id)arg1;

@end
