#ifndef __GL_BUFFERS_INCLUDED__
#define __GL_BUFFERS_INCLUDED__


#include "gl_frontend.h"

namespace OpenGLDrv {

void	*AllocDynamicMemory(int size);
void	ResizeDynamicMemory(void *ptr, int newSize);
void	ClearBuffers();
void	ClearPortal();
void	AddSurfaceToPortal(surfaceBase_t *surf, shader_t *shader, int entityNum, int numDlights = 0);
void	InsertShaderIndex(int index);
void	SortSurfaces(viewPortal_t *port, surfaceInfo_t **destination);


void	CreateBuffers();
void	FreeBuffers();

} // namespace

#endif
