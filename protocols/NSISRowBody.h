/* Generated by RuntimeBrowser.
 */

@protocol NSISRowBody <NSObject>

@required

- (void)enumerateVariables:(void *)arg1; // needs 1 arg types, found 6: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSISVariable *, void*
- (void)removeVariable:(NSISVariable *)arg1;
- (void)replaceVariable:(void *)arg1 withExpression:(void *)arg2 processVariableNewToReceiver:(void *)arg3 processVariableDroppedFromReceiver:(void *)arg4; // needs 4 arg types, found 14: NSISVariable *, NSISLinearExpression *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSISVariable *, void*, id, void*, void, id, NSISVariable *, void*
- (void)replaceVariable:(NSISVariable *)arg1 withVariablePlusDelta:(double)arg2;
- (void)replaceVariable:(void *)arg1 withVariablePlusDelta:(void *)arg2 timesVariable:(void *)arg3 processVariableNewToReceiver:(void *)arg4 processVariableDroppedFromReceiver:(void *)arg5; // needs 5 arg types, found 15: NSISVariable *, double, NSISVariable *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSISVariable *, void*, id, void*, void, id, NSISVariable *, void*
- (unsigned long long)variableCount;

@end
