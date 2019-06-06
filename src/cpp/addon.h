
#ifndef _addon_h
#define _addon_h

#include <nan.h>
#include <v8.h>
#include <stdexcept>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <sys/time.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <memory.h>
#include <math.h>
#include <vector>
#include <dirent.h>
#include <getopt.h>
#include <algorithm>


using namespace std;


typedef struct {
    uint8_t red;     // 0 - 255 */
    uint8_t green;   // 0 - 255 */
    uint8_t blue;    // 0 - 255 */
    uint8_t alpha;   // 0 - 255 */
} RGBA;

class Addon {

public:
	Addon();

	static NAN_METHOD(render);

private:

};

#endif
