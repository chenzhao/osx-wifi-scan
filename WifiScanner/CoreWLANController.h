

@class CWInterface, CWConfiguration, CWNetwork, SFAuthorizationView;
@interface CoreWLANController : NSObject
{
	CWInterface *currentInterface;
	NSMutableArray *scanResults;
	CWConfiguration *configurationSession;
	BOOL joinDialogContext;

}
@property(readwrite, retain) CWInterface *currentInterface;
@property(readwrite, retain) NSMutableArray *scanResults;
@property(readwrite, retain) CWNetwork *selectedNetwork;
@property(readwrite, assign) BOOL joinDialogContext;

@end
