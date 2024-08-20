// Declaracion de la queue
QueueHandle_t queue;

// Queue de 10 chars
queue = xQueueCreate(10, sizeof(char));
// Queue de 5 uint32_t
queue = xQueueCreate(5, sizeof(uint32_t));
// Queue de 1 uint16_t*
queue = xQueueCreate(1, sizeof(uint16_t*));

// Estructura especial
typedef struct {
    uint32_t foo;
    char baz[10];
    bool bar;
} custom_t;

// Queue de 1 custom_t
queue = xQueueCreate(1, sizeof(custom_t));