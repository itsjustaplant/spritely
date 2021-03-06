#include "globals.h"

struct App_State {
    state_type_t current;
};

App_State_t App_State_make()
{
    App_State_t app_state = malloc(sizeof(struct App_State));

    app_state->current = SHELL;

    return app_state;
}

void App_State_free(App_State_t state)
{
    free(state);
}

void App_State_set_state(App_State_t state, state_type_t type)
{
    state->current = type;
}

state_type_t App_State_get_state(App_State_t state)
{
    return state->current;
}
