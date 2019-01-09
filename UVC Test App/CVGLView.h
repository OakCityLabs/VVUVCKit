#import <Cocoa/Cocoa.h>
#import <OpenGL/CGLMacro.h>




@interface CVGLView : NSOpenGLView	{
	IBOutlet id		appDelegate;
	OSSpinLock		renderLock;
	BOOL			initialized;
    NSRect          cachedBounds;
}

+ (NSRect) rectThatFitsRect:(NSRect)a inRect:(NSRect)b;
- (void) drawTextureRef:(CVOpenGLTextureRef)n;

@end
