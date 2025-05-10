
typedef struct {
    unsigned int vao;
    unsigned int program;
} Resources;

void draw(Resources *resourcesPtr);

Resources initResources();