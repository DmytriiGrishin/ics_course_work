#pragma once

typedef enum {
    INIT_STATE,
    DEFERRED_MODE_SELECTED_STATE,
    STRICT_MODE_SELECTED_STATE,
    INTENSITY_SELECTED_STATE,
    DELAY_SELECTED_STATE,
    PROGRESS_STATE
} state_e;

typedef enum {
    KEY_ONE_PRESSED_EVENT,
    KEY_TWO_PRESSED_EVENT,
    INTENSITY_SPECIFIED_EVENT,
    DELAY_SPECIFIED_EVENT,
    WORK_TIME_SPECIFIED_EVENT,
    FALLBACK_TO_INIT_EVENT
} event_e;

state_e get_current_state();

state_e handle_event(event_e event);