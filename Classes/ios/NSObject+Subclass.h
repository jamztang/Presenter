/*
 * This file is part of the Presenter package.
 * (c) James Tang <j@jamztang.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

typedef struct selBlockPair { SEL aSEL; id (^__unsafe_unretained aBlock)(id, ...); } selBlockPair;
#define NIL_PAIR ((struct selBlockPair) { 0, 0 })
#define PAIR_LIST (struct selBlockPair [])
#define BLOCK_CAST (id (^)(id, ...))

@interface NSObject (Subclass)

+ (Class)newSubclassNamed:(NSString *)name
                protocols:(Protocol **)protos
                    impls:(selBlockPair *)impls;

@end