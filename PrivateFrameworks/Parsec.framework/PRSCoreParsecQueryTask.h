/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@interface PRSCoreParsecQueryTask : PRSQueryTask {
    bool  _bingEnabled;
    PARSession * _parSession;
    bool  _parsecEnabled;
    PARTask * _task;
    unsigned long long  _whyQuery;
}

@property (retain) PARTask *task;

- (void).cxx_destruct;
- (void)handleResults:(id)arg1;
- (id)initWithSession:(id)arg1 parsecSession:(id)arg2 handler:(id)arg3 queue:(id)arg4 scaleFactor:(double)arg5 queryIdent:(unsigned long long)arg6 whyQuery:(unsigned long long)arg7;
- (bool)needsBag;
- (void)resume;
- (void)setBingState:(bool)arg1;
- (void)setParsecState:(bool)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
