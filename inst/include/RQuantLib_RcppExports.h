// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef __RQuantLib_RcppExports_h__
#define __RQuantLib_RcppExports_h__

#include <Rcpp.h>

namespace RQuantLib {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("RQuantLib", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("RQuantLib", "RQuantLib_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in RQuantLib");
            }
        }
    }

    inline double zeroPriceByYieldEngine(double yield, double faceAmount, double dayCounter, double frequency, double businessDayConvention, double compound, QuantLib::Date maturityDate, QuantLib::Date issueDate) {
        typedef SEXP(*Ptr_zeroPriceByYieldEngine)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_zeroPriceByYieldEngine p_zeroPriceByYieldEngine = NULL;
        if (p_zeroPriceByYieldEngine == NULL) {
            validateSignature("double(*zeroPriceByYieldEngine)(double,double,double,double,double,double,QuantLib::Date,QuantLib::Date)");
            p_zeroPriceByYieldEngine = (Ptr_zeroPriceByYieldEngine)R_GetCCallable("RQuantLib", "RQuantLib_zeroPriceByYieldEngine");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_zeroPriceByYieldEngine(Rcpp::wrap(yield), Rcpp::wrap(faceAmount), Rcpp::wrap(dayCounter), Rcpp::wrap(frequency), Rcpp::wrap(businessDayConvention), Rcpp::wrap(compound), Rcpp::wrap(maturityDate), Rcpp::wrap(issueDate));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline double zeroYieldByPriceEngine(double price, double faceAmount, double dayCounter, double frequency, double businessDayConvention, double compound, QuantLib::Date maturityDate, QuantLib::Date issueDate) {
        typedef SEXP(*Ptr_zeroYieldByPriceEngine)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_zeroYieldByPriceEngine p_zeroYieldByPriceEngine = NULL;
        if (p_zeroYieldByPriceEngine == NULL) {
            validateSignature("double(*zeroYieldByPriceEngine)(double,double,double,double,double,double,QuantLib::Date,QuantLib::Date)");
            p_zeroYieldByPriceEngine = (Ptr_zeroYieldByPriceEngine)R_GetCCallable("RQuantLib", "RQuantLib_zeroYieldByPriceEngine");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_zeroYieldByPriceEngine(Rcpp::wrap(price), Rcpp::wrap(faceAmount), Rcpp::wrap(dayCounter), Rcpp::wrap(frequency), Rcpp::wrap(businessDayConvention), Rcpp::wrap(compound), Rcpp::wrap(maturityDate), Rcpp::wrap(issueDate));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline double fixedRateBondYieldByPriceEngine(double settlementDays, double price, std::string cal, double faceAmount, double businessDayConvention, double compound, double redemption, double dayCounter, double frequency, QuantLib::Date maturityDate, QuantLib::Date issueDate, QuantLib::Date effectiveDate, std::vector<double> rates) {
        typedef SEXP(*Ptr_fixedRateBondYieldByPriceEngine)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_fixedRateBondYieldByPriceEngine p_fixedRateBondYieldByPriceEngine = NULL;
        if (p_fixedRateBondYieldByPriceEngine == NULL) {
            validateSignature("double(*fixedRateBondYieldByPriceEngine)(double,double,std::string,double,double,double,double,double,double,QuantLib::Date,QuantLib::Date,QuantLib::Date,std::vector<double>)");
            p_fixedRateBondYieldByPriceEngine = (Ptr_fixedRateBondYieldByPriceEngine)R_GetCCallable("RQuantLib", "RQuantLib_fixedRateBondYieldByPriceEngine");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_fixedRateBondYieldByPriceEngine(Rcpp::wrap(settlementDays), Rcpp::wrap(price), Rcpp::wrap(cal), Rcpp::wrap(faceAmount), Rcpp::wrap(businessDayConvention), Rcpp::wrap(compound), Rcpp::wrap(redemption), Rcpp::wrap(dayCounter), Rcpp::wrap(frequency), Rcpp::wrap(maturityDate), Rcpp::wrap(issueDate), Rcpp::wrap(effectiveDate), Rcpp::wrap(rates));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline Rcpp::List FixedRateWithRebuiltCurve(Rcpp::List bondparam, Rcpp::NumericVector ratesVec, SEXP dateSexp, SEXP zeroSexp, Rcpp::List dateparams) {
        typedef SEXP(*Ptr_FixedRateWithRebuiltCurve)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_FixedRateWithRebuiltCurve p_FixedRateWithRebuiltCurve = NULL;
        if (p_FixedRateWithRebuiltCurve == NULL) {
            validateSignature("Rcpp::List(*FixedRateWithRebuiltCurve)(Rcpp::List,Rcpp::NumericVector,SEXP,SEXP,Rcpp::List)");
            p_FixedRateWithRebuiltCurve = (Ptr_FixedRateWithRebuiltCurve)R_GetCCallable("RQuantLib", "RQuantLib_FixedRateWithRebuiltCurve");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_FixedRateWithRebuiltCurve(Rcpp::wrap(bondparam), Rcpp::wrap(ratesVec), Rcpp::wrap(dateSexp), Rcpp::wrap(zeroSexp), Rcpp::wrap(dateparams));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::List >(__result);
    }

    inline Rcpp::List ZeroBondWithRebuiltCurve(SEXP bond, SEXP dateSexp, SEXP zeroSexp, SEXP dateparams) {
        typedef SEXP(*Ptr_ZeroBondWithRebuiltCurve)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_ZeroBondWithRebuiltCurve p_ZeroBondWithRebuiltCurve = NULL;
        if (p_ZeroBondWithRebuiltCurve == NULL) {
            validateSignature("Rcpp::List(*ZeroBondWithRebuiltCurve)(SEXP,SEXP,SEXP,SEXP)");
            p_ZeroBondWithRebuiltCurve = (Ptr_ZeroBondWithRebuiltCurve)R_GetCCallable("RQuantLib", "RQuantLib_ZeroBondWithRebuiltCurve");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_ZeroBondWithRebuiltCurve(Rcpp::wrap(bond), Rcpp::wrap(dateSexp), Rcpp::wrap(zeroSexp), Rcpp::wrap(dateparams));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::List >(__result);
    }

    inline QuantLib::Date advanceDate(QuantLib::Date issueDate, int days) {
        typedef SEXP(*Ptr_advanceDate)(SEXP,SEXP);
        static Ptr_advanceDate p_advanceDate = NULL;
        if (p_advanceDate == NULL) {
            validateSignature("QuantLib::Date(*advanceDate)(QuantLib::Date,int)");
            p_advanceDate = (Ptr_advanceDate)R_GetCCallable("RQuantLib", "RQuantLib_advanceDate");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_advanceDate(Rcpp::wrap(issueDate), Rcpp::wrap(days));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<QuantLib::Date >(__result);
    }

    inline std::vector<double> dayCount(std::vector<QuantLib::Date> startDates, std::vector<QuantLib::Date> endDates, std::vector<double> dayCounters) {
        typedef SEXP(*Ptr_dayCount)(SEXP,SEXP,SEXP);
        static Ptr_dayCount p_dayCount = NULL;
        if (p_dayCount == NULL) {
            validateSignature("std::vector<double>(*dayCount)(std::vector<QuantLib::Date>,std::vector<QuantLib::Date>,std::vector<double>)");
            p_dayCount = (Ptr_dayCount)R_GetCCallable("RQuantLib", "RQuantLib_dayCount");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_dayCount(Rcpp::wrap(startDates), Rcpp::wrap(endDates), Rcpp::wrap(dayCounters));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<double> >(__result);
    }

    inline std::vector<double> yearFraction(std::vector<QuantLib::Date> startDates, std::vector<QuantLib::Date> endDates, std::vector<double> dayCounters) {
        typedef SEXP(*Ptr_yearFraction)(SEXP,SEXP,SEXP);
        static Ptr_yearFraction p_yearFraction = NULL;
        if (p_yearFraction == NULL) {
            validateSignature("std::vector<double>(*yearFraction)(std::vector<QuantLib::Date>,std::vector<QuantLib::Date>,std::vector<double>)");
            p_yearFraction = (Ptr_yearFraction)R_GetCCallable("RQuantLib", "RQuantLib_yearFraction");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_yearFraction(Rcpp::wrap(startDates), Rcpp::wrap(endDates), Rcpp::wrap(dayCounters));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<double> >(__result);
    }

    inline bool setEvaluationDate(QuantLib::Date evalDate) {
        typedef SEXP(*Ptr_setEvaluationDate)(SEXP);
        static Ptr_setEvaluationDate p_setEvaluationDate = NULL;
        if (p_setEvaluationDate == NULL) {
            validateSignature("bool(*setEvaluationDate)(QuantLib::Date)");
            p_setEvaluationDate = (Ptr_setEvaluationDate)R_GetCCallable("RQuantLib", "RQuantLib_setEvaluationDate");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_setEvaluationDate(Rcpp::wrap(evalDate));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<bool >(__result);
    }

    inline double europeanOptionImpliedVolatilityEngine(std::string type, double value, double underlying, double strike, double dividendYield, double riskFreeRate, double maturity, double volatility) {
        typedef SEXP(*Ptr_europeanOptionImpliedVolatilityEngine)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_europeanOptionImpliedVolatilityEngine p_europeanOptionImpliedVolatilityEngine = NULL;
        if (p_europeanOptionImpliedVolatilityEngine == NULL) {
            validateSignature("double(*europeanOptionImpliedVolatilityEngine)(std::string,double,double,double,double,double,double,double)");
            p_europeanOptionImpliedVolatilityEngine = (Ptr_europeanOptionImpliedVolatilityEngine)R_GetCCallable("RQuantLib", "RQuantLib_europeanOptionImpliedVolatilityEngine");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_europeanOptionImpliedVolatilityEngine(Rcpp::wrap(type), Rcpp::wrap(value), Rcpp::wrap(underlying), Rcpp::wrap(strike), Rcpp::wrap(dividendYield), Rcpp::wrap(riskFreeRate), Rcpp::wrap(maturity), Rcpp::wrap(volatility));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline double americanOptionImpliedVolatilityEngine(std::string type, double value, double underlying, double strike, double dividendYield, double riskFreeRate, double maturity, double volguess, int timesteps, int gridpoints) {
        typedef SEXP(*Ptr_americanOptionImpliedVolatilityEngine)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_americanOptionImpliedVolatilityEngine p_americanOptionImpliedVolatilityEngine = NULL;
        if (p_americanOptionImpliedVolatilityEngine == NULL) {
            validateSignature("double(*americanOptionImpliedVolatilityEngine)(std::string,double,double,double,double,double,double,double,int,int)");
            p_americanOptionImpliedVolatilityEngine = (Ptr_americanOptionImpliedVolatilityEngine)R_GetCCallable("RQuantLib", "RQuantLib_americanOptionImpliedVolatilityEngine");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_americanOptionImpliedVolatilityEngine(Rcpp::wrap(type), Rcpp::wrap(value), Rcpp::wrap(underlying), Rcpp::wrap(strike), Rcpp::wrap(dividendYield), Rcpp::wrap(riskFreeRate), Rcpp::wrap(maturity), Rcpp::wrap(volguess), Rcpp::wrap(timesteps), Rcpp::wrap(gridpoints));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline Rcpp::List europeanOptionEngine(std::string type, double underlying, double strike, double dividendYield, double riskFreeRate, double maturity, double volatility) {
        typedef SEXP(*Ptr_europeanOptionEngine)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_europeanOptionEngine p_europeanOptionEngine = NULL;
        if (p_europeanOptionEngine == NULL) {
            validateSignature("Rcpp::List(*europeanOptionEngine)(std::string,double,double,double,double,double,double)");
            p_europeanOptionEngine = (Ptr_europeanOptionEngine)R_GetCCallable("RQuantLib", "RQuantLib_europeanOptionEngine");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_europeanOptionEngine(Rcpp::wrap(type), Rcpp::wrap(underlying), Rcpp::wrap(strike), Rcpp::wrap(dividendYield), Rcpp::wrap(riskFreeRate), Rcpp::wrap(maturity), Rcpp::wrap(volatility));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::List >(__result);
    }

    inline Rcpp::List americanOptionEngine(std::string type, double underlying, double strike, double dividendYield, double riskFreeRate, double maturity, double volatility, int timeSteps, int gridPoints, std::string engine) {
        typedef SEXP(*Ptr_americanOptionEngine)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_americanOptionEngine p_americanOptionEngine = NULL;
        if (p_americanOptionEngine == NULL) {
            validateSignature("Rcpp::List(*americanOptionEngine)(std::string,double,double,double,double,double,double,int,int,std::string)");
            p_americanOptionEngine = (Ptr_americanOptionEngine)R_GetCCallable("RQuantLib", "RQuantLib_americanOptionEngine");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_americanOptionEngine(Rcpp::wrap(type), Rcpp::wrap(underlying), Rcpp::wrap(strike), Rcpp::wrap(dividendYield), Rcpp::wrap(riskFreeRate), Rcpp::wrap(maturity), Rcpp::wrap(volatility), Rcpp::wrap(timeSteps), Rcpp::wrap(gridPoints), Rcpp::wrap(engine));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::List >(__result);
    }

    inline Rcpp::List europeanOptionArraysEngine(std::string type, Rcpp::NumericMatrix par) {
        typedef SEXP(*Ptr_europeanOptionArraysEngine)(SEXP,SEXP);
        static Ptr_europeanOptionArraysEngine p_europeanOptionArraysEngine = NULL;
        if (p_europeanOptionArraysEngine == NULL) {
            validateSignature("Rcpp::List(*europeanOptionArraysEngine)(std::string,Rcpp::NumericMatrix)");
            p_europeanOptionArraysEngine = (Ptr_europeanOptionArraysEngine)R_GetCCallable("RQuantLib", "RQuantLib_europeanOptionArraysEngine");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_europeanOptionArraysEngine(Rcpp::wrap(type), Rcpp::wrap(par));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::List >(__result);
    }

}

#endif // __RQuantLib_RcppExports_h__
