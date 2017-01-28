/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSInspectorController : NSObject {
    IKDOMDocument * _activeDocument;
    IKAppContext * _appContext;
    IKJSInspectorCSSAgent * _cssAgent;
    IKJSInspectorDOMAgent * _domAgent;
    RWIProtocolInspector * _inspector;
    bool  _inspectorConnected;
    id  _inspectorConnectedToken;
    id  _inspectorDisconntectedToken;
    IKJSInspectorPageAgent * _pageAgent;
}

@property (nonatomic, readonly) IKDOMDocument *activeDocument;
@property (readonly) IKAppContext *appContext;
@property (nonatomic, readonly) RWIProtocolInspector *inspector;

- (void).cxx_destruct;
- (id)_nodeById:(long long)arg1 fromNode:(id)arg2;
- (id)activeDocument;
- (void)activeDocumentDidChange;
- (id)appContext;
- (void)appDocumentDidUpdate:(id)arg1;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;
- (id)inspector;
- (id)nodeById:(long long)arg1;
- (void)resetStylesFromNode:(id)arg1;
- (id)styleFromComposer:(id)arg1;
- (void)updateStylesheets;

@end
