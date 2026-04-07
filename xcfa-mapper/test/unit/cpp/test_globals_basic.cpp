int g_counter = 7;
char g_msg[] = "ok";

int read_globals() {
  return g_counter + (int)g_msg[0];
}
