enum {
  DYAD_EVENT_NULL,
  DYAD_EVENT_DESTROY,
  DYAD_EVENT_ACCEPT,
  DYAD_EVENT_LISTEN,
  DYAD_EVENT_CONNECT,
  DYAD_EVENT_CLOSE,
  DYAD_EVENT_READY,
  DYAD_EVENT_DATA,
  DYAD_EVENT_LINE,
  DYAD_EVENT_ERROR,
  DYAD_EVENT_TIMEOUT,
  DYAD_EVENT_TICK
};

enum {
  DYAD_STATE_CLOSED,
  DYAD_STATE_CLOSING,
  DYAD_STATE_CONNECTING,
  DYAD_STATE_CONNECTED,
  DYAD_STATE_LISTENING
};