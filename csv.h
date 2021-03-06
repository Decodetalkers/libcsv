#ifndef CSV_H
#define CSV_H
#include <string>
#include <vector>
namespace libcsv {
struct CSV_SERDER {
public:
  CSV_SERDER(std::vector<int> index, int typeindex);
  std::vector<std::pair<int, std::vector<double>>>
  get_messages(std::string fname);

private:
  std::vector<int> index;
  int type_index;
};
} // namespace libcsv
#endif // !CSV_H
