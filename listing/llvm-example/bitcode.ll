define void @C::foo(%class.C* %this) {
  %1 = alloca %class.C*
  store %class.C* %this, %class.C** %1
  %2 = load %class.C*, %class.C** %1
  %3 = getelementptr %class.C, %class.C*
                     %2, i32 0, i32 0
  %4 = load i32*, i32** %3
  store i32 42, i32* %4
  ret void
}
