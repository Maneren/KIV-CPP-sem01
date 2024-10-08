#include "writer.hpp"

class SVGWriter : public IWriter {
public:
  SVGWriter(std::ostream &out) : IWriter(out) {}
  void write(const Scene &scene) override;
  ~SVGWriter() override = default;
};
