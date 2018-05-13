open BsReactNative;

let styles =
  StyleSheet.create({
    "wrapper":
      Style.(
        style([flex(1.), justifyContent(Center), alignItems(Center)])
      ),
  });

let app = () =>
  <View style=styles##wrapper>
    <View style=Style.(style([padding(Pt(5.))]))>
      <Text value="Reason is awesome!" />
    </View>
  </View>;