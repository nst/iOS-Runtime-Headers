/* Generated by RuntimeBrowser.
 */

@protocol PKPassFooterViewDelegate <NSObject>

@required

- (bool)isPassFooterViewInGroup:(PKPassFooterView *)arg1;
- (void)passFooterViewDidChangeCoachingState:(PKPassFooterView *)arg1;
- (void)passFooterViewDidChangeUserIntentRequirement:(PKPassFooterView *)arg1;
- (unsigned long long)suppressedContentForPassFooter:(PKPassFooterView *)arg1;

@optional

- (void)passFooterViewDidChangePileSuppressionRequirement:(PKPassFooterView *)arg1;

@end
