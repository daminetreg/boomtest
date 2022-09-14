#include <iostream>
//#include <boost/filesystem.hpp>
#include <all.hpp>
void banana() {
  std::cout << "boom" /*<< boost::filesystem::current_path()*/ << std::endl;
  function();
  function();
  function();
 
  function();
     // tipi::cache::extract_pack_or_snapshot(project_.mirrored_src_dir(), settings_.target+"_platform_dir"+ project_.revision());

  std::cout << "oh YEAH" << "\n";
  ///
  
}

int Omain(int argc, char** argv) {
  banana();
  return 0;
}