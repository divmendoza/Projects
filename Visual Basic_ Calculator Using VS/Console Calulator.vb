Module Module1

    Dim firstnum As Double
    Dim secondnum As Double
    Dim answer As Double
    Dim ops As String
    
    Sub Main()
        Console.WriteLine("Console Calculator" & vbNewLine)
        
        Console.Write("Enter the first number: ")
        firstnum = Double.Parse(Console.ReadLine())
        
        Console.WriteLine("Select an operator (+, -, *, /, ^, %): ")
        ops = Console.ReadLine()
        
        Console.Write("Enter the second number: ")
        secondnum = Double.Parse(Console.ReadLine())
        
        If ops = "+" Then
            answer = firstnum + secondnum
        ElseIf ops = "-" Then
            answer = firstnum - secondnum
        ElseIf ops = "/" Then
            answer = firstnum / secondnum
        ElseIf ops = "*" Then
            answer = firstnum * secondnum
        ElseIf ops = "^" Then
            answer = firstnum ^ secondnum
        ElseIf ops = "%" Then
            answer = firstnum Mod secondnum
        Else
            Console.WriteLine("Invalid operator.")
            Exit Sub
        End If
        
        Console.WriteLine("Result: " & answer)
        Console.WriteLine(vbNewLine & "Press any key to exit...")
        Console.ReadKey()

    End Sub

End Module
