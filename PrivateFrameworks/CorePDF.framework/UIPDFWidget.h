/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFWidget : UIView {
    UIPDFDocument * activeDocument;
    int  currentPageCount;
    NSTimer * heartbeatTimer;
    UILabel * infoLabel;
    int  queueCount;
    struct { 
        int byteCount; 
        int currentPageCount; 
        int renderJobsCount; 
        bool memWarning; 
    }  queueData;
    int  queueIndex;
    int  renderJobsCount;
    int  totalPageCount;
    NSMutableSet * trackedPages;
}

- (void)addedPageView:(int)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)heartbeat;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withDocument:(id)arg2;
- (void)removedPageView:(int)arg1;

@end
