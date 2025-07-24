#include <array>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
namespace py = pybind11;

struct SlowType {
  std::array<int, 102400> member{};
};

PYBIND11_MODULE(basic, module) {
  py::class_<SlowType>(module, "SlowType")
      .def(py::init<>())

      .def_readwrite("member", &SlowType::member);
}
