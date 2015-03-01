// file      : odb/relational/mysql/inline.cxx
// copyright : Copyright (c) 2009-2013 Code Synthesis Tools CC
// license   : GNU GPL v3; see accompanying LICENSE file

#include <odb/relational/inline.hxx>

#include <odb/relational/mysql/common.hxx>
#include <odb/relational/mysql/context.hxx>

using namespace std;

namespace relational
{
  namespace mysql
  {
    namespace inline_
    {
      namespace relational = relational::inline_;

      struct null_member: relational::null_member_impl<sql_type>,
                          member_base
      {
        null_member (base const& x)
            : member_base::base (x),      // virtual base
              member_base::base_impl (x), // virtual base
              base_impl (x),
              member_base (x)
        {
        }

        virtual void
        traverse_simple (member_info& mi)
        {
          if (get_)
            os << "r = r && i." << mi.var << "null;";
          else
            os << "i." << mi.var << "null = 1;";
        }
      };
      entry<null_member> null_member_;
    }
  }
}
