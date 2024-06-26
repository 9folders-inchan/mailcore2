//
//  NSData+MCO.h
//  mailcore2
//
//  Created by DINH Viêt Hoà on 1/21/13.
//  Copyright (c) 2013 MailCore. All rights reserved.
//

#ifndef MAILCORE_NSDATA_MCO_H

#define MAILCORE_NSDATA_MCO_H

#import <Foundation/Foundation.h>

#ifdef __cplusplus
namespace mailcore {
    class Data;
}
#endif

typedef NS_ENUM(NSInteger, MCOEncoding);

@interface NSData (MCO)

#ifdef __cplusplus
+ (NSData *) mco_dataWithMCData:(mailcore::Data *)cppData;

- (mailcore::Data *) mco_mcData;

#endif

- (NSData *) decodedDataUsingEncoding:(MCOEncoding)encoding remained:(NSData **)remaining;

@end

#endif
