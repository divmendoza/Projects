Public Class Form1
    Dim first As Double
    Dim second As Double
    Dim operators As String
    Dim result As Double
    Private Sub Main_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub

    Private Sub zero_Click(sender As Object, e As EventArgs) Handles zero.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "0"
        Else
            TxtBox.Text += "0"
        End If
    End Sub

    Private Sub Label_TextChanged(sender As Object, e As EventArgs)

    End Sub

    Private Sub one_Click(sender As Object, e As EventArgs) Handles one.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "1"
        Else
            TxtBox.Text += "1"
        End If
    End Sub

    Private Sub two_Click(sender As Object, e As EventArgs) Handles two.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "2"
        Else
            TxtBox.Text += "2"
        End If
    End Sub

    Private Sub three_Click(sender As Object, e As EventArgs) Handles three.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "3"
        Else
            TxtBox.Text += "3"
        End If
    End Sub

    Private Sub four_Click(sender As Object, e As EventArgs) Handles four.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "4"
        Else
            TxtBox.Text += "4"
        End If
    End Sub

    Private Sub five_Click(sender As Object, e As EventArgs) Handles five.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "5"
        Else
            TxtBox.Text += "5"
        End If
    End Sub

    Private Sub six_Click(sender As Object, e As EventArgs) Handles six.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "6"
        Else
            TxtBox.Text += "6"
        End If
    End Sub

    Private Sub seven_Click(sender As Object, e As EventArgs) Handles seven.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "7"
        Else
            TxtBox.Text += "7"
        End If
    End Sub

    Private Sub eight_Click(sender As Object, e As EventArgs) Handles eight.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "8"
        Else
            TxtBox.Text += "8"
        End If
    End Sub

    Private Sub nine_Click(sender As Object, e As EventArgs) Handles nine.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "9"
        Else
            TxtBox.Text += "9"
        End If
    End Sub

    Private Sub doubleZero_Click(sender As Object, e As EventArgs) Handles doubleZero.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "00"
        Else
            TxtBox.Text += "00"
        End If
    End Sub

    Private Sub clear_Click(sender As Object, e As EventArgs) Handles clear.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Clear()
            Label.Clear()
            TxtBox.Text = "0"
            Label.Text = "0"
        Else
            TxtBox.Clear()
            Label.Clear()
            TxtBox.Text += "0"
            Label.Text = "0"
        End If
    End Sub

    Private Sub add_Click(sender As Object, e As EventArgs) Handles add.Click
        Label.Text = TxtBox.Text
        first = Double.Parse(TxtBox.Text)
        operators = "+"
        TxtBox.Clear()
    End Sub

    Private Sub equal_Click(sender As Object, e As EventArgs) Handles equal.Click
        If (operators.Equals("+")) Then
            second = Double.Parse(TxtBox.Text)
            result = first + second
            TxtBox.Text = result.ToString
        ElseIf (operators.Equals("-")) Then
            second = Double.Parse(TxtBox.Text)
            result = first - second
            TxtBox.Text = result.ToString
        ElseIf (operators.Equals("*")) Then
            second = Double.Parse(TxtBox.Text)
            result = first * second
            TxtBox.Text = result.ToString
        ElseIf (operators.Equals("/")) Then
            second = Double.Parse(TxtBox.Text)
            result = first / second
            TxtBox.Text = result.ToString
        End If
    End Sub

    Private Sub minus_Click(sender As Object, e As EventArgs) Handles minus.Click
        Label.Text = TxtBox.Text
        first = Double.Parse(TxtBox.Text)
        operators = "-"
        TxtBox.Clear()
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Label.Text = TxtBox.Text
        first = Double.Parse(TxtBox.Text)
        operators = "*"
        TxtBox.Clear()
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Label.Text = TxtBox.Text
        first = Double.Parse(TxtBox.Text)
        operators = "/"
        TxtBox.Clear()
    End Sub

    Private Sub pn_Click(sender As Object, e As EventArgs) Handles pn.Click
        If (TxtBox.Text.StartsWith("-")) Then
            If Not TxtBox.Text.Equals("0") Then
                TxtBox.Text = TxtBox.Text.TrimStart("-"c)
                TxtBox.Text = "+" + TxtBox.Text
            Else
                TxtBox.Text = TxtBox.Text.TrimStart("-"c)
                TxtBox.Text = "+" + TxtBox.Text
            End If
        Else
            If Not TxtBox.Text.Equals("0") Then
                TxtBox.Text = TxtBox.Text.TrimStart("+"c)
                TxtBox.Text = "-" + TxtBox.Text
            Else
                TxtBox.Text = TxtBox.Text.TrimStart("+"c)
                TxtBox.Text = "-" + TxtBox.Text
            End If
        End If
    End Sub
End Class
