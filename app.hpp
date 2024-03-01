#include <memory>

namespace infra {
class app {
public:
  app(int argc, char **argv) {
  }

  app(const app &) = delete;
  app &operator=(const app  &) = delete;
  ~app() {}

  virtual void run() {}
};
}

#ifndef LAUNCH_APP
#define LAUNCH_APP(launcher)                                                   \
  std::unique_ptr<launcher> app;                                               \
  int main(int argc, char **argv) {                                            \
    app.reset(new launcher(argc, argv));                                       \
    app->run();                                                                \
    app.reset();                                                               \
    return 0;                                                                  \
  }
#endif