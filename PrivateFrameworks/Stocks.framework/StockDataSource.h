/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StockDataSource : NSObject {
    long long  _identifier;
    NSString * _name;
    NSString * _sourceDescription;
}

@property (nonatomic) long long identifier;
@property (nonatomic, readonly) NSString *localizedSourceDescription;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *sourceDescription;

- (void).cxx_destruct;
- (id)archiveDictionary;
- (id)description;
- (long long)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)localizedSourceDescription;
- (id)name;
- (void)setIdentifier:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setSourceDescription:(id)arg1;
- (id)sourceDescription;

@end
