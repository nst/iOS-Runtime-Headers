/* Generated by RuntimeBrowser.
 */

@protocol TSTCellIterating <NSObject>

@required

- (TSTTableTileRowInfo *)currentRowInfo;
- (bool)getNextCellData:(id*)arg1;
- (void)iterateCellsUsingBlock:(void *)arg1; // needs 1 arg types, found 7: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, <TSTCellIteratorData> *, bool*, void*
- (<TSTCellIteratorData> *)nextCellData;
- (void)terminate;

@end