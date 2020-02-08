#ifndef MONTE_CARLO
#define MONTE_CARLO

#include <vector>

std::vector<std::vector<double> > monte_carlo(std::vector<double> data, const int sim_len, const int iterations);
double monte_carlo_fixed_strike_arithmatic_avg_asian_call(std::vector<double> data_underlying, const double strike, const double risk_free_rate, const int days_to_exp, const int iterations=100000);
double monte_carlo_fixed_strike_arithmatic_avg_asian_put(std::vector<double> data_underlying, const double strike, const double risk_free_rate, const int days_to_exp, const int iterations=100000);
double monte_carlo_floating_strike_arithmatic_avg_asian_call(std::vector<double> data_underlying, const double k, const double risk_free_rate, const int days_to_exp, const int iterations=100000);
double monte_carlo_floating_strike_arithmatic_avg_asian_put(std::vector<double> data_underlying, const double k, const double risk_free_rate, const int days_to_exp, const int iterations=100000);

#endif
