class Point {
	public:
		Point(const uint8_t z, const uint8_t radius = 127, const CHSV hsv = CHSV(HUE_RED,255,255)) :
			_hsv(hsv),
			_z(z),
			_radius(radius)
		{}


		uint8_t computeBrightnessFor(const uint8_t z) {
			int16_t centeredZ = 127+z-_z;
			centeredZ = (centeredZ>127) ? 255-centeredZ : centeredZ;
			if(centeredZ<127-_radius) {
				return 0;
			}
			uint16_t brightness = map(centeredZ, 127-_radius, 127, 0, 255);
			return (brightness*brightness)>>8;
		}

		uint8_t computeBrightnessFor(const uint8_t z1, const uint8_t z2) {
			const int8_t d1 = abs(_z - z1);
			const int8_t d2 = abs(_z - z2);
			return (d1 < d2) ? computeBrightnessFor(z1) : computeBrightnessFor(z2);
		}

		void computeVFor(const uint8_t z)
		{
			_hsv.value = computeBrightnessFor(z);
		}

		void setZ(const uint8_t z) { _z = z; }
		void setRadius(const uint8_t radius) { _radius = radius; }
		void setHSV(const CHSV hsv) { _hsv = hsv; }
		const CHSV hsv() { return _hsv; }

	private:
		CHSV _hsv;
		uint8_t _z;
		uint8_t _radius;
};

