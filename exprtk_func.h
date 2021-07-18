#ifndef _exprtk_func_h_
#define _exprtk_func_h_

#include <limits>

namespace exprtk
{
    class function_traits
    {
    public:

        function_traits()
            : allow_zero_parameters_(false),
            has_side_effects_(true),
            min_num_args_(0),
            max_num_args_(std::numeric_limits<std::size_t>::max())
        {}

        inline bool& allow_zero_parameters()
        {
            return allow_zero_parameters_;
        }

        inline bool& has_side_effects()
        {
            return has_side_effects_;
        }

        std::size_t& min_num_args()
        {
            return min_num_args_;
        }

        std::size_t& max_num_args()
        {
            return max_num_args_;
        }

    private:

        bool allow_zero_parameters_;
        bool has_side_effects_;
        std::size_t min_num_args_;
        std::size_t max_num_args_;
    };

    template <typename T>
    class ifunction : public function_traits
    {
    public:

        explicit ifunction(const std::size_t& pc)
            : param_count(pc)
        {}

        virtual ~ifunction()
        {}

#define empty_method_body                      \
      {                                              \
         return std::numeric_limits<T>::quiet_NaN(); \
      }                                              \

        inline virtual T operator() ()
            empty_method_body

            inline virtual T operator() (const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&, const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&, const T&, const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&, const T&, const T&, const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&, const T&, const T&, const T&, const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&,
                const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&,
                const T&, const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&,
                const T&, const T&, const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&,
                const T&, const T&, const T&, const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&,
                const T&, const T&, const T&, const T&, const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&,
                const T&, const T&, const T&, const T&, const T&, const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&,
                const T&, const T&, const T&, const T&, const T&, const T&, const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&,
                const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&,
                const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&)
            empty_method_body

            inline virtual T operator() (const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&,
                const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&, const T&)
            empty_method_body

#undef empty_method_body

            std::size_t param_count;
    };
}


#endif // _exprtk_func_h_
