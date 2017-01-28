/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIHealthSettingsSexPickerController : FIUIHealthSettingsPickerController {
    id  _sexUpdateHandler;
}

@property (nonatomic, copy) id sexUpdateHandler;

- (void).cxx_destruct;
- (long long)_biologicalSexForRow:(long long)arg1;
- (void)_updateWithBiologicalSex:(long long)arg1;
- (void)forceUpdate;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)setBiologicalSex:(long long)arg1;
- (void)setSexUpdateHandler:(id)arg1;
- (id)sexUpdateHandler;

@end
