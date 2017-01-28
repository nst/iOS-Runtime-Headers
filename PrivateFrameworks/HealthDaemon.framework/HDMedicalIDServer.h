/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMedicalIDServer : HDSubserver <HDMedicalIDServerInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)remote_deleteMedicalIDDataWithCompletion:(id)arg1;
- (void)remote_medicalIDDataCreateIfNecessary:(bool)arg1 completion:(id)arg2;
- (void)remote_medicalIDEmergencyContactsWithCompletion:(id)arg1;
- (void)remote_updateMedicalIDData:(id)arg1 completion:(id)arg2;

@end
