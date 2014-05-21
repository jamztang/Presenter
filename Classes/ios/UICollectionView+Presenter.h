/*
 * This file is part of the Presenter package.
 * (c) James Tang <j@jamztang.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <UIKit/UIKit.h>

@interface UICollectionView (Presenter)

- (void)registerNib:(UINib *)nib
       forCellClass:(Class)aClass
withReuseIdentifier:(NSString *)identifier;

- (void)registerNib:(UINib *)nib
       forCellClass:(Class)aClass
     cellIdentifier:(NSString *)cellIdentifier  // identifier specified in nib
withReuseIdentifier:(NSString *)reuseIdentifier;

@end
