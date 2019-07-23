/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUICardSnippetViewController : SiriUISnippetViewController <CRKCardPresentationDelegate, CRKCardViewControllerDelegate, SiriUICardLoadingObserver, SiriUICardSnippetViewDataSource, SiriUICardSnippetViewDelegate, SiriUIModalContainerViewControllerDelegate, _SiriUICardLoaderDelegate> {
    _SiriUICardLoader * _cardLoader;
    NSObject<OS_dispatch_group> * _cardLoadingGroup;
    CRKCardPresentation * _cardPresentation;
    UIViewController<CRKCardViewControlling> * _cardViewController;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    SACardSnippet * _newlyLoadedCardSnippet;
    SiriUIModalContainerViewController * _presentedModalContainerViewController;
    NSMutableDictionary * _referenceableCommandsByIdentifierMap;
    NSMutableDictionary * _referenceableSnippetsByIdentifierMap;
    SACardSnippet * _snippet;
}

@property (getter=_cardPresentation, setter=_setCardPresentation:, nonatomic, retain) CRKCardPresentation *cardPresentation;
@property (getter=_cardViewController, setter=_setCardViewController:, nonatomic, retain) UIViewController<CRKCardViewControlling> *cardViewController;
@property (nonatomic, readonly) <CRKCardViewControllerDelegate> *cardViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SiriUICardSnippetView *view;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_addCardViewControllerAsChildViewController:(id)arg1;
- (void)_beginMonitoringForNextCardWithBlock:(id /* block */)arg1;
- (id)_cardPresentation;
- (id)_cardViewController;
- (void)_forwardProgressEvent:(unsigned long long)arg1 toCardViewController:(id)arg2 animated:(bool)arg3;
- (void)_forwardProgressEventToCardViewController:(unsigned long long)arg1;
- (void)_logReferencedCommands;
- (id)_metricsContextOfEventsForCard:(id)arg1;
- (id)_metricsContextOfEventsForCardSection:(id)arg1 inCard:(id)arg2;
- (void)_removeCardViewControllerFromParentViewController:(id)arg1;
- (void)_setCardPresentation:(id)arg1;
- (void)_setCardViewController:(id)arg1;
- (void)_updateContentSizeAndNotifyDelegateIfNecessary:(bool)arg1;
- (void)_validateCardForParsecFeedbackDelivery:(id)arg1 validHandler:(id /* block */)arg2;
- (void)_validateCardSectionForParsecFeedbackDelivery:(id)arg1 validHandler:(id /* block */)arg2;
- (double)boundingWidthForPresentation:(id)arg1;
- (bool)cardLoader:(id)arg1 loadCard:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)cardLoader:(id)arg1 shouldLoadCard:(id)arg2;
- (void)cardLoadingMonitor:(id)arg1 didReceiveCardSnippet:(id)arg2;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSnippetViewSashWasTapped:(id)arg1;
- (struct CGSize { double x1; double x2; })cardViewController:(id)arg1 boundingSizeForCardSectionViewController:(id)arg2;
- (void)cardViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
- (void)cardViewController:(id)arg1 willDismissViewController:(id)arg2;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (id)cardViewControllerDelegate;
- (void)cardViewControllerDidLoad:(id)arg1;
- (void)cardViewDidAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardViewDidDisappearForCard:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardViewWillAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)configureReusableTransparentHeaderView:(id)arg1;
- (double)contentHeightForWidth:(double)arg1;
- (void)controllerForCard:(id)arg1 didReceiveAsyncCard:(id)arg2 withAsyncCardReceiptFeedback:(id)arg3;
- (void)controllerForCard:(id)arg1 didRequestAsyncCard:(id)arg2 withAsyncCardRequestFeedback:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultViewInsets;
- (double)desiredHeight;
- (double)desiredHeightForTransparentHeaderView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isIndicatingActivity;
- (void)loadView;
- (id)localeForCardSnippetView:(id)arg1;
- (bool)logContentsIfApplicable;
- (void)modalContainerViewControllerViewDidDisappear:(id)arg1;
- (void)modalContainerViewControllerViewWillDisappear:(id)arg1;
- (unsigned long long)navigationIndexOfCardViewController:(id)arg1;
- (bool)performNextCardCommand:(id)arg1 forCardViewController:(id)arg2;
- (bool)performPunchoutCommand:(id)arg1 forCardViewController:(id)arg2;
- (bool)performReferentialCommand:(id)arg1 forCardViewController:(id)arg2;
- (void)presentViewController:(id)arg1 forCardViewController:(id)arg2;
- (id)requestContext;
- (id)sashItemForCardSnippetView:(id)arg1;
- (void)setSnippet:(id)arg1;
- (void)siriDidDeactivate;
- (void)siriDidReceiveViewsWithDialogPhase:(id)arg1;
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(bool)arg2;
- (id)snippet;
- (Class)transparentHeaderViewClass;
- (bool)usePlatterStyle;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (void)userDidReportFeedback:(id)arg1 fromCardSection:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)wasAddedToTranscript;
- (void)willCancel;
- (void)willConfirm;

@end
