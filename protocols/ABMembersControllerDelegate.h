/* Generated by RuntimeBrowser.
 */

@protocol ABMembersControllerDelegate <NSObject>

@required

- (bool)allowsShowingPersonsCards;
- (int)behavior;
- (bool)membersController:(ABMembersController *)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (void)membersControllerDidEndSearching:(ABMembersController *)arg1;
- (void)membersControllerDidEndServerSearch:(ABMembersController *)arg1;
- (void)membersControllerWillEndSearching:(ABMembersController *)arg1;
- (void)membersControllerWillStartSearching:(ABMembersController *)arg1;
- (ABModel *)model;
- (void)personWasSelected:(void*)arg1;
- (bool)showCardForPerson:(void*)arg1 animate:(bool)arg2;
- (bool)showCardForPerson:(void*)arg1 withMemberCell:(UIView *)arg2 animate:(bool)arg3;
- (void)showInsertEditorForPerson:(void*)arg1 animate:(bool)arg2;

@end
