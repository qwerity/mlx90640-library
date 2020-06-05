#ifndef fb_h
#define fb_h
#ifdef __cplusplus
extern "C" {
#endif

int fb_init();
void fb_cleanup();

void fb_put_pixel(int x, int y, int r, int g, int b);

#ifdef __cplusplus
}
#endif
#endif
