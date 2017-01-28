/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSafeLocketReader : NSObject {
    NSString * _defaultPhotoPath;
    <NTKSafeLocketReaderDelegate> * _delegate;
    bool  _isPhotoLibraryAvailable;
    NPTOLocket * _locket;
}

@property (nonatomic) <NTKSafeLocketReaderDelegate> *delegate;
@property (nonatomic, readonly) bool firstUnlockHasOccurred;
@property (nonatomic, readonly) unsigned long long numberOfLoadedPhotos;
@property (nonatomic, readonly) unsigned long long numberOfTotalPhotos;

- (void).cxx_destruct;
- (id)delegate;
- (bool)firstUnlockHasOccurred;
- (unsigned long long)indexOfPhotoWithIdentifier:(id)arg1;
- (id)initWithDefaultPhotoPath:(id)arg1;
- (void)loadPhotoAtIndex:(unsigned long long)arg1 handler:(id)arg2;
- (unsigned long long)numberOfLoadedPhotos;
- (unsigned long long)numberOfTotalPhotos;
- (void)setDelegate:(id)arg1;

@end
