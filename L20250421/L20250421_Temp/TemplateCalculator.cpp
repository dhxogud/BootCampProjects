#pragma once

template <typename T>
class TemplateCalculator
{
public:
	T Add(T A, T B);
	T Subtract(T A, T B);
	T Multiply(T A, T B);
	T Divide(T A, T B);
};

template <typename T>
T TemplateCalculator<T>::Add(T A, T B)
{
	return A + B;
}

template <typename T>
T TemplateCalculator<T>::Subtract(T A, T B)
{
	return A - B;
}

template <typename T>
T TemplateCalculator<T>::Multiply(T A, T B)
{
	return A * B;
}

template <typename T>
T TemplateCalculator<T>::Divide(T A, T B)
{
	return A / B;
}