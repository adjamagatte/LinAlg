#include "_linalg.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const volatile * get_pointer<class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const volatile >(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_582003aac6505a6d9ea4c4fa99329e5e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::Index  (::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::*method_pointer_b56afc7a8c2353ab883944457788298f)() const = &::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::innerStride;
    ::Eigen::Index  (::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::*method_pointer_992f8240a80759b49f02e38fcc77710b)() const = &::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, autowig::Held< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Type, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > > class_582003aac6505a6d9ea4c4fa99329e5e("_Matrix_582003aac6505a6d9ea4c4fa99329e5e", "", boost::python::no_init);
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init<  >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::Scalar const &, ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::Scalar const &, ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::Scalar const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::Scalar const &, ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::Scalar const &, ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::Scalar const &, ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::Scalar const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def("inner_stride", method_pointer_b56afc7a8c2353ab883944457788298f, "");
    class_582003aac6505a6d9ea4c4fa99329e5e.def("outer_stride", method_pointer_992f8240a80759b49f02e38fcc77710b, "");

    if(autowig::Held< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Type, autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Type, boost::python::objects::make_ptr_instance< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, boost::python::objects::pointer_holder< autowig::Held< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Type, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > >();
    }

}