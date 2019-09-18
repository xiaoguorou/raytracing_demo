#include <cmath>
// use template to implicit tell the variable's type
template<typename T>
class vec3 {
public:
	/*
	 * construct function
	 */
	T mX, mY, mZ;
	// initialize this vector to zero
	vec3() : mX(T(0)), mY(T(0)), mZ(T(0)) {}
	vec3(T x, T y, T z) : mX(x), mY(y), mZ(z) {}

	/*
	 * operate function
	 */
	// vec3 + operator
	vec3<T> operator + (const vec3<T> &v) const {
		return vec3<T>(mX + v.mX, mY + v.mY, mZ + v.mZ);
	}
	// vec3 - operator
	vec3<T> operator - (const vec3<T> &v) const {
		return vec3<T>(mX - v.mX, mY - v.mY, mZ - v.mZ);
	}
	// vec3 * operator
	vec3<T> operator * (const vec3<T> &v) const {
		return vec3<T>(mX * v.mX, mY * v.mY, mZ * v.mZ);
	}
	// vec3 dot operator
	T dot(const vec3<T> &v) const {
		return (mX * v.mX + mY * v.mY + mZ * v.mZ);
	}
	// vec3 cross product operator
	vec3<T> crossProduct(const vec3<T> &v) {
		return vec3<T>(
			mY * v.mZ - mZ * v.mY,
			mZ * v.mX - mX * v.mZ,
			mX * v.mY - mY * v.mX);
	}
	// length function
	T length() {
		return sqrt(mX * mX + mY * mY + mZ * mZ);
	}
};

typedef vec3<float> vec3f;
