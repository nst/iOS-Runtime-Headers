/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLClusteringLogger : NSObject {
    NSString * _fileNameBase;
    bool  _logEnabled;
    NSURL * _logFileURL;
    NSURL * _logFolderURL;
}

@property (readonly) NSString *fileNameBase;
@property (readonly) bool logEnabled;
@property (readonly) NSURL *logFileURL;
@property (readonly) NSURL *logFolderURL;

+ (void)appendString:(id)arg1 toLogFile:(id)arg2;
+ (id)currentDateTime;
+ (id)padStringWithSpaces:(id)arg1 toSize:(long long)arg2;

- (void).cxx_destruct;
- (id)fileNameBase;
- (id)initWithOptions:(id)arg1 logEnabled:(bool)arg2;
- (id)initWithOptions:(id)arg1 logEnabled:(bool)arg2 logFileNameBase:(id)arg3;
- (void)logClusterLookupMapL0:(const struct map<long long, std::__1::vector<long long, std::__1::allocator<long long> >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long> > > > > { struct __tree<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > > > > { struct __tree_node<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, std::__1::less<long long>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1;
- (void)logClusterLookupMapL1:(const struct map<long long, std::__1::vector<long long, std::__1::allocator<long long> >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long> > > > > { struct __tree<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > > > > { struct __tree_node<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, std::__1::less<long long>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1;
- (void)logClusterMap:(const struct map<long long, std::__1::vector<long long, std::__1::allocator<long long> >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long> > > > > { struct __tree<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > > > > { struct __tree_node<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, std::__1::less<long long>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 level:(id)arg2;
- (void)logClusterMapL0:(const struct map<long long, std::__1::vector<long long, std::__1::allocator<long long> >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long> > > > > { struct __tree<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > > > > { struct __tree_node<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, std::__1::less<long long>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1;
- (void)logClusterMapL1:(const struct map<long long, std::__1::vector<long long, std::__1::allocator<long long> >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long> > > > > { struct __tree<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > > > > { struct __tree_node<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long> > >, std::__1::less<long long>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1;
- (bool)logEnabled;
- (id)logFileURL;
- (id)logFolderURL;
- (void)logString:(id)arg1;
- (void)resetFileNameURLWithCurentDateTime;

@end
