//
//  Crypto.h
//  FontLabel
//



#import <Foundation/Foundation.h>


@interface NSData (AES256) 
- (NSData *)AES256EncryptWithKey:(NSString *)key;
- (NSData *)AES256DecryptWithKey:(NSString *)key;
@end
