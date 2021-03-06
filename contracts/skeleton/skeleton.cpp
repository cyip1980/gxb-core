#include <gxblib/gxb.hpp>

using namespace gxblib;
using namespace graphene;

class hello : public graphene::contract {
  public:
      using contract::contract;

      /// @abi action
      void hi(account_name user) {
          print("Hello, ", name{user});
      }

      /// @abi action
      void bye(account_name user) {
          print("Bye, ", name{user});
      }
};

GXB_ABI(hello, (hi)(bye))
