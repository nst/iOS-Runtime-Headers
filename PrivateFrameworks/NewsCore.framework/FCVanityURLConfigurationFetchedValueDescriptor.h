/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCVanityURLConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor {
    FCFetchedValueManager * _configurationManager;
}

@property (nonatomic, readonly) FCFetchedValueManager *configurationManager;

- (void).cxx_destruct;
- (id)_vanityURLConfiguration;
- (id)configurationManager;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fastCachedValue;
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithConfigurationManager:(id)arg1;
- (id)inputManagers;
- (bool)isValue:(id)arg1 equalToValue:(id)arg2;

@end
