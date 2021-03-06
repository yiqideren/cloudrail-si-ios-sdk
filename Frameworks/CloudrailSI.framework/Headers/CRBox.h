
#import <Foundation/Foundation.h>
#import "CRCloudStorageProtocol.h"

@interface CRBox : NSObject <CRCloudStorageProtocol>
@property (weak, nonatomic) id target;

-(instancetype)initWithClientId:(NSString *)clientId clientSecret:(NSString *)clientSecret redirectUri:(NSString *)redirectUri state:(NSString *)state;

//Specific for CloudStorage Interface
-(instancetype)initWithClientId:(NSString *)clientId clientSecret: (NSString *)clientSecret;

-(void)useAdvancedAuthentication;

@end
